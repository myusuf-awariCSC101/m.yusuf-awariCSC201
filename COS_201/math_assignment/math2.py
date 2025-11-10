import tkinter as tk

def divide_polynomial():
    try:
        # Polynomial Ax⁵ + Bx⁴ + Cx³ + Dx² + Ex + F
        # Add zero's if variable does not exist
        A = float(entry_1.get())   #coeff1 
        B = float(entry_2.get())   #coeff2
        C = float(entry_3.get())   #coeff3
        D = float(entry_4.get())   #coeff4
        E = float(entry_5.get())   #coeff5
        F = float(entry_6.get())   # new constant term

        # Divisor dx - e
        d = float(entry_7.get())
        e = float(entry_8.get())

        # calculation of remainder (because dx - e = d(x - e/d))
        a = e / d #(x-a) this is the divisor,  E/D = x

        #Setup
        #Arrange the coefficients of Polynomials in a row. Use a (from the divisor x-a) outside the division box.
        #Bring down the leading coefficient.Multiply the result by a and write it under the next coefficient.
        #Add the two values vertically.
        #Repeat the process until the last column.
        #The final number in the row is the remainder.

        # Synthetic Division
        b1 = A                        # a | A | B     | C           | D | E | F 
        b2 = B + b1 * a               #       |a*A    | (a(a*A)+B)  |
        b3 = C + b2 * a               #   | A |(a*A)+B| (a(a*A)+B)+C|
        b4 = D + b3 * a
        b5 = E + b4 * a
        b6 = F + b5 * a  # remainder

        remainder = b6

        label_result.config(text=f"Remainder = {remainder}", fg="white", bg="#1b5e20")

    except:
        label_result.config(text="Error!", fg="white", bg="#b71c1c")


# GUI set up.
# This is where the questions display and collect the user input
root = tk.Tk()
root.title("Synthetic Division (Ax⁵ + Bx⁴ + Cx³ + Dx² + Ex + F)")
root.geometry("600x550")
root.config(bg="#e3f2fd")

title = tk.Label(root, text="Using Synthetic Division (Ax⁵ + Bx⁴ + Cx³ + Dx² + Ex + F)",
                 font=("Arial", 16, "bold"), bg="#2196f3", fg="white", pady=15)
title.pack(fill="x")

frame = tk.Frame(root, bg="#e3f2fd")
frame.pack(pady=20)

labels_style = {"bg": "#e3f2fd", "font": ("Arial", 12)}

tk.Label(frame, text="Coeff A:", **labels_style).grid(row=0, column=0, padx=10, pady=8)
entry_1 = tk.Entry(frame, font=("Arial", 12), width=15); entry_1.grid(row=0, column=1)

tk.Label(frame, text="Coeff B:", **labels_style).grid(row=1, column=0, padx=10, pady=8)
entry_2 = tk.Entry(frame, font=("Arial", 12), width=15); entry_2.grid(row=1, column=1)

tk.Label(frame, text="Coeff C:", **labels_style).grid(row=2, column=0, padx=10, pady=8)
entry_3 = tk.Entry(frame, font=("Arial", 12), width=15); entry_3.grid(row=2, column=1)

tk.Label(frame, text="Coeff D:", **labels_style).grid(row=3, column=0, padx=10, pady=8)
entry_4 = tk.Entry(frame, font=("Arial", 12), width=15); entry_4.grid(row=3, column=1)

tk.Label(frame, text="Coeff E:", **labels_style).grid(row=4, column=0, padx=10, pady=8)
entry_5 = tk.Entry(frame, font=("Arial", 12), width=15); entry_5.grid(row=4, column=1)

tk.Label(frame, text="Constant:", **labels_style).grid(row=5, column=0, padx=10, pady=8)
entry_6 = tk.Entry(frame, font=("Arial", 12), width=15); entry_6.grid(row=5, column=1)

tk.Label(frame, text="Divisor: dx - e", bg="#e3f2fd", font=("Arial", 12, "bold")).grid(row=6, columnspan=2, pady=(10,2))

tk.Label(frame, text="d:", **labels_style).grid(row=7, column=0, padx=10, pady=8)
entry_7 = tk.Entry(frame, font=("Arial", 12), width=15); entry_7.grid(row=7, column=1)

tk.Label(frame, text="e:", **labels_style).grid(row=8, column=0, padx=10, pady=8)
entry_8 = tk.Entry(frame, font=("Arial", 12), width=15); entry_8.grid(row=8, column=1)

btn = tk.Button(root, text="Calculate Remainder", command=divide_polynomial,
                bg="#4caf50", fg="white", font=("Arial", 13, "bold"), padx=10, pady=8)
btn.pack(pady=10)

label_result = tk.Label(root, text="", font=("Arial", 18, "bold"), width=25, pady=15)
label_result.pack(pady=10)

root.mainloop()