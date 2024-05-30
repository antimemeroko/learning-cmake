module functions
  use, intrinsic :: iso_c_binding, only: c_int
  implicit none

  private
  public predecessor

contains

  function predecessor(n) result(retval) bind(C, name="predecessor")
    integer(c_int), value, intent(in) :: n
    integer(c_int) :: retval

    retval = n - 1
  end function predecessor

end module functions