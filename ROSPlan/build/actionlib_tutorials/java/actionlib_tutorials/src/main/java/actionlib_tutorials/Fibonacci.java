package actionlib_tutorials;

public interface Fibonacci extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "actionlib_tutorials/Fibonacci";
  static final java.lang.String _DEFINITION = "#goal definition\nint32 order\n---\n#result definition\nint32[] sequence\n---\n#feedback\nint32[] sequence";
}
