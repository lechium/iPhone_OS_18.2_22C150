//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString, RAPPlacecardImageryLayoutManager, UIView, UIViewController, geo_isolater;
@protocol GEOMapItemPhoto;

@interface UGCReportImageryController : NSObject
{
    RAPPlacecardImageryLayoutManager *_layoutManager;	// 8 = 0x8
    UIViewController *_presentingViewController;	// 16 = 0x10
    UIView *_rapButtonView;	// 24 = 0x18
    id <GEOMapItemPhoto> _geoPhoto;	// 32 = 0x20
    MKMapItem *_mapItem;	// 40 = 0x28
    NSString *_photoURL;	// 48 = 0x30
    _Bool _shouldCancelPresentation;	// 56 = 0x38
    geo_isolater *_downloadIsolator;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000008cacac
- (void)cancelPresentation;	// IMP=0x00100000008cac53
- (void)fetchLayoutAndPresentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000008ca794
- (id)initWithMapItem:(id)arg1 reportedPhoto:(id)arg2 presentingViewController:(id)arg3;	// IMP=0x00100000008ca620

@end

