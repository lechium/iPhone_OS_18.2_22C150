//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MKMapItem, NSURL, UIImageView, UILabel;

@interface UGCPOIEnrichmentHeaderView : UIView
{
    UIImageView *_headerImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_secondaryLabel;	// 24 = 0x18
    NSURL *_brandIconURL;	// 32 = 0x20
    _Bool _isDownloadingBrandIcon;	// 40 = 0x28
    _Bool _hideSummaryText;	// 41 = 0x29
    MKMapItem *_mapItem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000c67cd1
@property(nonatomic) _Bool hideSummaryText; // @synthesize hideSummaryText=_hideSummaryText;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)_setBrandIcon:(id)arg1 fallbackToMapItemIcon:(_Bool)arg2;	// IMP=0x0010000000c67bcc
- (void)_startBrandIconDownload;	// IMP=0x0010000000c67a06
- (void)_cancelBrandIconDownload;	// IMP=0x0010000000c6798b
- (void)_updateIcon;	// IMP=0x0010000000c67877
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000c677ae
- (void)layoutSubviews;	// IMP=0x0010000000c67707
- (void)_refreshContent;	// IMP=0x0010000000c6761e
- (void)_setupConstraints;	// IMP=0x0010000000c673a2
- (void)_setupSubviews;	// IMP=0x0010000000c6711e
- (void)dealloc;	// IMP=0x0010000000c670e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000c6705a

@end
