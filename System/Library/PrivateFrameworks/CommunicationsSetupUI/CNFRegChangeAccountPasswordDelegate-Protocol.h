//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CommunicationsSetupUI/NSObject-Protocol.h>

@class CNFRegChangeAccountPasswordController, NSString;

@protocol CNFRegChangeAccountPasswordDelegate <NSObject>
- (void)changePasswordControllerDidFinish:(CNFRegChangeAccountPasswordController *)arg1 withAppleID:(NSString *)arg2 authID:(NSString *)arg3 authToken:(NSString *)arg4;
- (void)changePasswordControllerDidCancel:(CNFRegChangeAccountPasswordController *)arg1;
@end
