//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/WFActionRemoteUserInterface-Protocol.h>

@class NSString, WFSendEmailContent;

@protocol WFSendEmailActionUserInterface <WFActionRemoteUserInterface>
- (void)showWithEmailContent:(WFSendEmailContent *)arg1 preferredSendingEmailAddress:(NSString *)arg2 isManaged:(_Bool)arg3 completionHandler:(void (^)(WFSendUserInterfaceResult *, NSError *))arg4;
@end

