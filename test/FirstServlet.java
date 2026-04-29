import jakarta.servlet.*;
import jakarta.servlet.annotation.WebServlet;
import java.io.*;

@WebServlet(urlPatterns="/test")
public class FirstServlet implements Servlet{
   
        static {
           System.out.println("Servlet Loading...");
        }

        public FirstServlet(){
           System.out.println("Servlet Instantiation...");  
        }

        @Override
	public void init(ServletConfig config) throws ServletException{
            System.out.println("Servlet Initialization...");
	}

        @Override
	public void service(ServletRequest req,ServletResponse resp)
			throws ServletException,IOException{
            System.out.println("********Request Processing*********");
	}

        @Override
	public void destroy(){
            System.out.println("<<<<<<<<<<SERVLET DEINSTANTIATION>>>>>>>>>");
	}

        @Override
	public ServletConfig getServletConfig(){
                return null;

	}

	public String getServletInfo(){
                return  " ";

	}
}
