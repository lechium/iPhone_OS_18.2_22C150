//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXViewport, UIContextMenuConfiguration, UITargetedPreview, UIToolTipConfiguration, UIViewController;

@protocol SXInteractionContextProviding <NSObject>
- (UIToolTipConfiguration *)toolTipAtLocation:(struct CGPoint)arg1 viewport:(SXViewport *)arg2;
- (UITargetedPreview *)targetedPreviewAtLocation:(struct CGPoint)arg1 viewport:(SXViewport *)arg2;
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (UIContextMenuConfiguration *)contextMenuAtLocation:(struct CGPoint)arg1 viewport:(SXViewport *)arg2;
@end

