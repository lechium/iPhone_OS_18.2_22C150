//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSData, NSException, NSString;

@protocol MSComposeBodyFieldObserver <NSObject>
- (void)composeBodyFieldAddLinkPreviewsEnabled:(void (^)(_Bool))arg1;
- (void)composeBodyFieldSmartReplyAvailable:(void (^)(_Bool))arg1;
- (void)composeBodyFieldQuickReplyEnabled:(void (^)(_Bool))arg1;
- (void)composeBodyFieldDidThrowException:(NSException *)arg1;
- (void)composeBodyFieldDidChange;
- (void)composeBodyFieldAddAttachmentWithData:(NSData *)arg1 filename:(NSString *)arg2 mimeType:(NSString *)arg3 uniqueID:(NSString *)arg4;
@end
