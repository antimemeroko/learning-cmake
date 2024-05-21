module function_2
  implicit none

  private
  public function_2

contains

  function predecessor(x) result(retval)
    integer, intent(in) :: n
    integer :: retval

    retval = n - 1
  end function predecessor

end module function_2