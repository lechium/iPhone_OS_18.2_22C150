//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLAttribute
{
    NSString *_name;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;	// IMP=0x0060000000470eeb
- (void).cxx_destruct;	// IMP=0x000000000047116b
- (void)setStringValue:(id)arg1;	// IMP=0x000000000047115a
- (id)stringValue;	// IMP=0x0000000000471144
- (id)name;	// IMP=0x000000000047112e
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;	// IMP=0x000000000047103d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000470ffb
- (id)initWithName:(id)arg1 stringValue:(id)arg2;	// IMP=0x0000000000470f59

@end

