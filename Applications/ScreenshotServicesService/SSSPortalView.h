//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CAPortalLayer;

@interface SSSPortalView : UIView
{
    UIView *_sourceView;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x0040000000026da1
- (void).cxx_destruct;	// IMP=0x0020000000027263
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) unsigned long long sourceLayerRenderId;
@property(nonatomic) unsigned int sourceContextId;
@property(nonatomic) _Bool allowsBackdropGroups;
@property(nonatomic) _Bool matchesPosition;
@property(nonatomic) _Bool matchesTransform;
@property(nonatomic) _Bool matchesAlpha;
@property(nonatomic) _Bool hidesSourceView;
@property(readonly, nonatomic) CAPortalLayer *portalLayer;

@end

