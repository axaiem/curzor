class Operation {
public:
  virtual void run() = 0;
  virtual void undo() = 0;
};