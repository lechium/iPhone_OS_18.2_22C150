//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface OfflineMapsManagementSection : NSObject
{
    unsigned long long _sectionType;	// 8 = 0x8
}

@property(nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, nonatomic) NSString *footerText;
@property(readonly, nonatomic) NSString *headerText;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000097ea09
- (unsigned long long)hash;	// IMP=0x001000000097e9f7
- (id)initWithSectionType:(unsigned long long)arg1;	// IMP=0x001000000097e9ba

@end

