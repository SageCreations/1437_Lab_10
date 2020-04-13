#ifndef LINETYPE_HPP
#define LINETYPE_HPP

class lineType {
 public:
  void setLine(double a = 0, double b = 0, double c = 0);
  // Function to set the line.

  void equation() const;

  double getXCoefficient() const;
  double getYCoefficient() const;
  double getCOnstantTerm() const;

  void setXCoefficient(double coeff);
  void setYCoefficient(double coeff);
  void setConstantTerm(double c);

  double slope() const;
  // Return the slope. This function does not check if the
  // line is vartical. Because the slope of a vertical line
  // is undefined, before calling this function check if the
  // line is nonvertial.

  bool verticalLine() const;
  bool horizontalLine() const;

  bool equalLines(lineType otherLine) const;
  // Returns true of both lines are the same.

  bool parallel(lineType otherLine) const;
  // Function to determine if this line is parallel to otherLine.

  bool perpendicular(lineType otherLine) const;
  // Function to determine if this line is perperdicular to otherLine.

  void pointOfIntersection(lineType otherLine);
  // If lines intersect, then this function finds the point
  // of intersection.

  lineType(double a = 0, double b = 0, double c = 0);
  // Constructor

  friend std::ostream& operator << (std::ostream& stream, const lineType& line);
  // Overloads the stream insertion operator, <<, for smooth output.
  friend std::istream& operator >> (std::istream& stream, const lineType& line);
  // Overloads the stream extraction operator, >>, for easy input. 
  // (The line ax + by + c is input as (a, b, c).)

  void operator = (const lineType& line);
  // Overloads the assignment operator = to copy a line into another line.

  bool operator + (const lineType& line);
  // Overloads the unary operator +, as a member function, 
  // so that it returns true if a line is vertical; false otherwise.

  bool operator - (const lineType& line);
  // Overloads the unary operator -, as a member function, 
  // so that it returns true if a line is horizontal; false otherwise.

  bool operator == (const lineType& line);
  // Overloads the operator ==, as a member function, 
  // so that it returns true if two lines are equal; false otherwise.

  bool operator || (const lineType& line);
  // Overloads the operator ||, as a member function, 
  // so that it returns true if two lines are parallel; false otherwise.

  bool operator && (const lineType& line);
  // Overloads the operator &&, as a member function, 
  // so that it returns true if two lines are perpendicular; false otherwise.

 private:
  double xCoeff;
  double yCoeff;
  double constTerm;
  bool hasSlope;
};

#endif