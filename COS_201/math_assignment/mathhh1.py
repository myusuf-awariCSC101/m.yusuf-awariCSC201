import tkinter as tk

def divide_polynomial():
    try:
        # the polynomial
        A = float(entry_1.get()) #coeff1
        B = float(entry_2.get()) #coeff2
        C = float(entry_3.get()) #coeff3

        Con = float(entry_4.get()) # Constant

        # Divisor stuff
        D = float(entry_5.get()) 
        E = float(entry_6.get())

        #calculation of remainder    
        a = E / D #(x-a) this is the divisor,  E/D = x

        remainder = A*(a**3) + B*(a**2) + C*a + Con # (f(x) =(ax^2 + bx + c)) / f(x - a) = Remainder = f(a)
        
        label_result.config(text=f"{remainder}", fg="white", bg="#1b5e20")
    except:
        label_result.config(text="Error!", fg="white", bg="#b71c1c")



#GUI explanation
root = tk.Tk()
root.title("Remainder Theorem Calculator")
root.geometry("600x450")
root.config(bg="#e3f2fd")

title = tk.Label(root, text="Remainder Theorem (ax² + bx + c / (dx - e))",
                 font=("Arial", 16, "bold"), bg="#2196f3", fg="white", pady=15)
title.pack(fill="x")

frame = tk.Frame(root, bg="#e3f2fd")
frame.pack(pady=20)

labels_style = {"bg": "#e3f2fd", "font": ("Arial", 12)}

tk.Label(frame, text="Coeff1:", **labels_style).grid(row=0, column=0, padx=10, pady=8)
entry_1 = tk.Entry(frame, font=("Arial", 12), width=15); entry_a.grid(row=0, column=1)

tk.Label(frame, text="Coeff2:", **labels_style).grid(row=1, column=0, padx=10, pady=8)
entry_2 = tk.Entry(frame, font=("Arial", 12), width=15); entry_b.grid(row=1, column=1)

tk.Label(frame, text="Coeff3:", **labels_style).grid(row=2, column=0, padx=10, pady=8)
entry_3 = tk.Entry(frame, font=("Arial", 12), width=15); entry_b.grid(row=2, column=1)

tk.Label(frame, text="constant:", **labels_style).grid(row=3, column=0, padx=10, pady=8)
entry_4 = tk.Entry(frame, font=("Arial", 12), width=15); entry_c.grid(row=3, column=1)

# ➕ Divisor Title
tk.Label(frame, text="Divisor: dx - e", bg="#e3f2fd", font=("Arial", 12, "bold")).grid(row=4, columnspan=2, pady=(10,2))

tk.Label(frame, text="d:", **labels_style).grid(row=5, column=0, padx=10, pady=8)
entry_d = tk.Entry(frame, font=("Arial", 12), width=15); entry_5.grid(row=5, column=1)

tk.Label(frame, text="e:", **labels_style).grid(row=6, column=0, padx=10, pady=8)
entry_e = tk.Entry(frame, font=("Arial", 12), width=15); entry_6.grid(row=6, column=1)

btn = tk.Button(root, text="Calculate Remainder", command=divide_polynomial,
                bg="#4caf50", fg="white", font=("Arial", 13, "bold"), padx=10, pady=8)
btn.pack(pady=10)

label_result = tk.Label(root, text="", font=("Arial", 18, "bold"), width=25, pady=15)
label_result.pack(pady=10)

root.mainloop()