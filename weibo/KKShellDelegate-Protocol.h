//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class KKApplication, KKHttpOptions, KKShell, NSDictionary, NSError, NSString, NSURL, UIViewController;
@protocol KKHttpTask;

@protocol KKShellDelegate

@optional
- (_Bool)KKShell:(KKShell *)arg1 application:(KKApplication *)arg2 openViewController:(UIViewController *)arg3;
- (_Bool)KKShell:(KKShell *)arg1 application:(KKApplication *)arg2 cancel:(id)arg3;
- (id <KKHttpTask>)KKShell:(KKShell *)arg1 application:(KKApplication *)arg2 send:(KKHttpOptions *)arg3 weakObject:(id)arg4;
- (void)KKShell:(KKShell *)arg1 application:(KKApplication *)arg2 willSend:(KKHttpOptions *)arg3;
- (UIViewController *)KKShell:(KKShell *)arg1 application:(KKApplication *)arg2 viewController:(NSDictionary *)arg3;
- (_Bool)KKShell:(KKShell *)arg1 application:(KKApplication *)arg2 openAction:(NSDictionary *)arg3;
- (void)KKShell:(KKShell *)arg1 didFailWithError:(NSError *)arg2 url:(NSURL *)arg3;
- (void)KKShell:(KKShell *)arg1 didLoading:(NSURL *)arg2 path:(NSString *)arg3;
- (void)KKShell:(KKShell *)arg1 options:(KKHttpOptions *)arg2;
- (void)KKShell:(KKShell *)arg1 willLoading:(NSURL *)arg2;
- (_Bool)KKShell:(KKShell *)arg1 openApplication:(KKApplication *)arg2;
- (_Bool)KKShell:(KKShell *)arg1 open:(NSURL *)arg2 path:(NSString *)arg3 appInfo:(NSDictionary *)arg4 openApplication:(void (^)(KKApplication *))arg5;
@end

