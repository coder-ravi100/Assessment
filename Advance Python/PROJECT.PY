from tkinter import *
#from PIL import Image, ImageTk

# ---------------- Window ----------------
root = Tk()
root.title("Simple Music Player")
root.geometry("900x600")
root.configure(bg="#98F28C")
#root.resizable(False, False)

# ---------------- Fonts ----------------
title_font = ("Georgia", 26, "bold")
artist_font = ("Georgia", 14)
small_font = ("Georgia", 10)

# ---------------- Top Text ----------------
Label(
    root,
    text="PLAYING",
    bg="#98F28C",
    fg="black",
    font=("Georgia", 12)
).pack(pady=15)

# ---------------- Album Art ----------------
# img = Image.open("image.png")  
# img = img.resize((260, 260))
# album_img = ImageTk.PhotoImage(img)

#Label(root, image=album_img, bg="#98F28C").pack(pady=10)

# ---------------- Track Info ----------------
Label(
    root,
    text="Track Name",
    bg="#98F28C",
    fg="black",
    font=title_font
).pack(pady=(15, 0))

Label(
    root,
    text="Track Artist",
    bg="#98F28C",
    fg="black",
    font=artist_font
).pack()

# ---------------- Controls ----------------
control_frame = Frame(root, bg="#98F28C")
control_frame.pack(pady=25)

Button(
    control_frame,
    text="⏮",
    font=("Arial", 22),
    bg="#98F28C",
    bd=0,
    cursor="hand2"
).grid(row=0, column=0, padx=30)

Button(
    control_frame,
    text="▶",
    font=("Arial", 28, "bold"),
    bg="#1E1E1E",
    fg="#98F28C",
    width=3,
    height=1,
    bd=0,
    cursor="hand2"
).grid(row=0, column=1)

Button(
    control_frame,
    text="⏭",
    font=("Arial", 22),
    bg="#98F28C",
    bd=0,
    cursor="hand2"
).grid(row=0, column=2, padx=30)

# ---------------- Progress Bar ----------------
progress_frame = Frame(root, bg="#98F28C")
progress_frame.pack(pady=20)

Label(progress_frame, text="00:00", bg="#98F28C", font=small_font).grid(row=0, column=0)

Scale(
    progress_frame,
    from_=0,
    to=100,
    orient=HORIZONTAL,
    length=400,
    showvalue=False,
    troughcolor="#1E1E1E",
    sliderlength=12,
    bg="#98F28C",
    bd=0,
    highlightthickness=0
).grid(row=0, column=1, padx=10)

Label(progress_frame, text="00:00", bg="#98F28C", font=small_font).grid(row=0, column=2)

# ---------------- Volume ----------------
volume_frame = Frame(root, bg="#98F28C")
volume_frame.pack()

Label(volume_frame, text="🔈", bg="#98F28C").grid(row=0, column=0)

Scale(
    volume_frame,
    from_=0,
    to=100,
    orient=HORIZONTAL,
    length=200,
    showvalue=False,
    troughcolor="#1E1E1E",
    bg="#98F28C",
    bd=0,
    highlightthickness=0
).grid(row=0, column=1)

Label(volume_frame, text="🔊", bg="#98F28C").grid(row=0, column=2)

# ---------------- Run ----------------
root.mainloop()
