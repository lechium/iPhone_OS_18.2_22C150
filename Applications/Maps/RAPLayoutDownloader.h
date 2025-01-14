//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, MISSING_TYPE;
@protocol GEOMapServiceFeedbackReportTicket;

@interface RAPLayoutDownloader : NSObject
{
    id <GEOMapServiceFeedbackReportTicket> _ticket;	// 8 = 0x8
    GEOMapServiceTraits *_traits;	// 16 = 0x10
    MISSING_TYPE *_options;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000006d3a93
- (int)_geoFormTypeForOptions;	// IMP=0x00100000006d3a68
- (id)_extractLayoutFormFromResponse:(id)arg1;	// IMP=0x00100000006d3880
- (void)fetchLayoutConfig:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d355e
- (id)_generateRequestParams;	// IMP=0x00100000006d34f7
- (void)cancel;	// IMP=0x00100000006d34b9
- (id)initWithLayoutOptions:(id)arg1;	// IMP=0x00100000006d33f6

@end

