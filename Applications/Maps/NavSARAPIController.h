//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MKMapServiceCategoriesTicket;

@interface NavSARAPIController : NSObject
{
    id <MKMapServiceCategoriesTicket> _ticket;	// 8 = 0x8
    NSArray *_categories;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004b8846
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) id <MKMapServiceCategoriesTicket> ticket; // @synthesize ticket=_ticket;
- (id)fetchCategoriesTicket;	// IMP=0x00100000004b86af
- (void)cancelFetchingSARCategories;	// IMP=0x00100000004b8664
- (void)fetchSARCategoriesOnCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000004b8367

@end

