//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPImage, LPLinkMetadata;
@protocol PUSharingHeaderDataProvider, PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUSharingHeaderController : NSObject
{
    LPImage *_icloudLinkImage;	// 8 = 0x8
    LPImage *_placeholderImage;	// 16 = 0x10
    id <PXDisplayAsset> _sharingHeaderFrontAsset;	// 24 = 0x18
    id <PXDisplayAsset> _sharingHeaderBackAsset;	// 32 = 0x20
    _Bool _showingUnmodifiedOriginalThumbnail;	// 40 = 0x28
    id <PUSharingHeaderDataProvider> _dataProvider;	// 48 = 0x30
    LPLinkMetadata *_linkMetadata;	// 56 = 0x38
}

+ (id)new;	// IMP=0x00600000002b767d
- (void).cxx_destruct;	// IMP=0x00000000002b73f9
@property(retain, nonatomic) LPLinkMetadata *linkMetadata; // @synthesize linkMetadata=_linkMetadata;
@property(readonly, nonatomic) __weak id <PUSharingHeaderDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (id)_linkPresentationImageForPerson:(id)arg1;	// IMP=0x00000000002b7268
- (id)createTextAttachmentForGlyphImageWithName:(id)arg1;	// IMP=0x00000000002b714d
- (id)_sharingHeaderStatus;	// IMP=0x00000000002b5dcd
- (void)updateIfNeeded;	// IMP=0x00000000002b52fc
- (id)initWithDataProvider:(id)arg1;	// IMP=0x00000000002b51d0
- (id)init;	// IMP=0x00000000002b5156

@end
