//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSString, NSValue;

@protocol QLRemotePreviewHost <NSObject>
- (void)previewControllerDidUpdatePreferredContentSize:(NSValue *)arg1;
- (void)previewControllerDidUpdateTitle:(NSString *)arg1;
- (void)previewControllerWantsFullScreen:(_Bool)arg1;
@end
