//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit15SynapseLinkView
{
    MISSING_TYPE *$__lazy_storage_$_linkPresentationView;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_analytics;	// 40 = 0x28
    MISSING_TYPE *synapseLink;	// 48 = 0x30
    MISSING_TYPE *canvas;	// 56 = 0x38
    MISSING_TYPE *viewModelSize;	// 64 = 0x40
    MISSING_TYPE *viewScaleTransform;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_hasUserActivityWithLinkContextInfo;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000044bd70
- (id)init;	// IMP=0x000000000044bcc0
- (void)linkViewNeedsResize:(id)arg1;	// IMP=0x000000000044bc70
- (_Bool)_wantsContextMenuPreviewForLinkView:(id)arg1;	// IMP=0x000000000044baf0
- (id)_contextMenuActionsForLinkView:(id)arg1;	// IMP=0x000000000044b9f0
- (void)layoutSubviews;	// IMP=0x000000000044a5f0
- (void)didMoveToWindow;	// IMP=0x000000000044a2a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000044a280
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000044bec0
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000044bde0

@end

