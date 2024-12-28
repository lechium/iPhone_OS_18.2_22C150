//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol _PUProgressIndicatorTileViewDelegate;

__attribute__((visibility("hidden")))
@interface _PUProgressIndicatorTileView : UIView
{
    struct {
        _Bool respondsToDidChangeTraitCollection;
    } _delegateFlags;	// 8 = 0x8
    _Bool _showingErrorProgressView;	// 9 = 0x9
    UIView *_extraHittableSubview;	// 16 = 0x10
    id <_PUProgressIndicatorTileViewDelegate> _traitCollectionDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000537150
@property(nonatomic) __weak id <_PUProgressIndicatorTileViewDelegate> traitCollectionDelegate; // @synthesize traitCollectionDelegate=_traitCollectionDelegate;
@property(nonatomic) _Bool showingErrorProgressView; // @synthesize showingErrorProgressView=_showingErrorProgressView;
@property(nonatomic) __weak UIView *extraHittableSubview; // @synthesize extraHittableSubview=_extraHittableSubview;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000053706c
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000536e3c

@end
