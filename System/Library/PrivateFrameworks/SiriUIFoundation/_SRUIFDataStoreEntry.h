//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SRUIFDataStoreEntry : NSObject
{
    long long _type;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000009859
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithPropertyListRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000953b
- (id)propertyListRepresentation;	// IMP=0x0000000000009466
- (id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000009351
- (id)_valuePropertyListRepresentation;	// IMP=0x0000000000009253
- (long long)_typeForPropertyListString:(id)arg1;	// IMP=0x0000000000009233
- (id)_propertyListStringForType;	// IMP=0x000000000000920b
- (id)initWithType:(long long)arg1 value:(id)arg2;	// IMP=0x0000000000009194

@end

