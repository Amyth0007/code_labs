class Area:
    def circle_area(self, r):
        return 3.14 * (r ** 2)
    def rect_area(self, a, b):
        return a * b
    def triangle_area(self, base, h):
        return 0.5 * base * h
areaObj = Area()
radius = float(input("Enter radius: "))
area_circle = areaObj.circle_area(radius)
print(area_circle)

side1 = float(input("Enter 1st side of rectangle: "))
side2 = float(input("Enter 2nd side of rectangle: "))
area_rect = areaObj.rect_area(side1, side2)
print(area_rect)

base_value = float(input("enter base of triangle: "))
height_value = float(input("enter height of triangle: "))
area_triangle = areaObj.triangle_area(base_value, height_value)
print(area_triangle)
