//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNContactRelation;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupContactRelationItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x00600000002891f0
- (id)valueForDisplayString:(id)arg1;	// IMP=0x00000000002892c5
- (id)displayStringForValue:(id)arg1;	// IMP=0x00000000002892b0
- (id)normalizedValue;	// IMP=0x0000000000289260
@property(readonly, nonatomic) CNContactRelation *contactRelation;

@end
