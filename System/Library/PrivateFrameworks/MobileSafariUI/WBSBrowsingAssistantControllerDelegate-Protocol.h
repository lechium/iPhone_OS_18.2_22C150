//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSURL, WBSBrowsingAssistantController;

@protocol WBSBrowsingAssistantControllerDelegate <NSObject>

@optional
- (_Bool)browsingAssistantControllerShouldCheckRemoteContent:(WBSBrowsingAssistantController *)arg1;
- (void)browsingAssistantControllerDidUpdateUserConsentState:(WBSBrowsingAssistantController *)arg1;
- (void)browsingAssistantController:(WBSBrowsingAssistantController *)arg1 didUpdateContentOptionsForURL:(NSURL *)arg2;
- (void)browsingAssistantControllerDidReset:(WBSBrowsingAssistantController *)arg1;
@end
