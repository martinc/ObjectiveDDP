#import <UIKit/UIKit.h>

@class MeteorClient;

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *username;
@property (weak, nonatomic) IBOutlet UITextField *password;
@property (weak, nonatomic) IBOutlet UILabel *connectionStatusText;
@property (weak, nonatomic) IBOutlet UIImageView *connectionStatusLight;
@property (weak, nonatomic) IBOutlet UIButton *loginButton;
@property (weak, nonatomic) IBOutlet UIButton *sayHiButton;
@property (weak, nonatomic) IBOutlet UIButton *createAccountButton;
@property (strong, nonatomic) MeteorClient *meteor;

- (IBAction)didTapLoginButton:(id)sender;

@end
