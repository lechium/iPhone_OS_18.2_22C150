//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FRNewsReferralItemWidgetArticleListEncodableElement : NSObject
{
    NSArray *_JSONArray;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000017b83
- (void).cxx_destruct;	// IMP=0x0020000000017b95
@property(readonly, copy, nonatomic) NSArray *JSONArray; // @synthesize JSONArray=_JSONArray;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000017a6d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000179fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000179f2
- (id)initWithJSONArray:(id)arg1;	// IMP=0x001000000001795e
- (id)init;	// IMP=0x001000000001780b

@end
