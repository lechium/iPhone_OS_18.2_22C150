//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class NSError, NSString, RBSProcessExitContext;

@protocol BKSAlternateSystemAppClientProtocol <NSObject>
- (void)alternateSystemAppWithBundleIDDidTerminate:(NSString *)arg1;
- (void)alternateSystemAppWithBundleIDDidOpen:(NSString *)arg1;
- (void)alternateSystemAppWithBundleID:(NSString *)arg1 didExitWithContext:(RBSProcessExitContext *)arg2;
- (void)alternateSystemAppWithBundleID:(NSString *)arg1 failedToOpenWithResult:(NSError *)arg2;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (void)didBlockSystemAppForAlternateSystemApp;
@end
