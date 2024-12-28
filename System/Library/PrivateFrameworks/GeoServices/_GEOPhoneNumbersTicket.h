//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractMapServiceTicket.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket
{
    NSArray *_phoneNumbers;	// 296 = 0x128
    _Bool _allowCellularDataForLookup;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x00000000006f883d
- (CDStruct_026435ec)dataRequestKind;	// IMP=0x00000000006f87fd
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x00000000006f85f2
- (id)description;	// IMP=0x00000000006f8565
- (id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3;	// IMP=0x00000000006f84bc

@end
