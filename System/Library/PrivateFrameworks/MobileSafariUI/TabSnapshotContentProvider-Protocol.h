//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class UIColor, UIImage, UIView;

@protocol TabSnapshotContentProvider <NSObject>

@optional
@property(readonly, nonatomic) _Bool snapshotContentShouldUnderlapTopBackdrop;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) UIColor *snapshotBackgroundColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,R,N

@property(readonly, nonatomic) UIView *snapshotContentView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N

@property(readonly, nonatomic) UIImage *snapshotContentImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

- (_Bool)checkAndResetIfNextSnapshotRequiresScreenUpdates;
- (void)prepareForSnapshotOfSize:(struct CGSize)arg1 completion:(void (^)(_Bool))arg2;
- (struct CGRect)snapshotContentRectInBounds:(struct CGRect)arg1;
@end
