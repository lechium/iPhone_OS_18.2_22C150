//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/NSObject-Protocol.h>

@class NSUUID;

@protocol CPTemplateDelegate <NSObject>
- (void)handleActionForControlIdentifier:(NSUUID *)arg1;

@optional
- (_Bool)isCarPlayCanvasActive;
- (void)templateDidDismissWithIdentifier:(NSUUID *)arg1;
- (void)templateDidDisappearWithIdentifier:(NSUUID *)arg1 animated:(_Bool)arg2;
- (void)templateWillDisappearWithIdentifier:(NSUUID *)arg1 animated:(_Bool)arg2;
- (void)templateDidAppearWithIdentifier:(NSUUID *)arg1 animated:(_Bool)arg2;
- (void)templateWillAppearWithIdentifier:(NSUUID *)arg1 animated:(_Bool)arg2;
@end

