//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKXAtomBindingImplementation;

@interface CKXAtomORCSchemaFormatVersionORCv2 : NSObject
{
    CKXAtomBindingImplementation *_binding;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d22b8
@property(readonly, nonatomic) CKXAtomBindingImplementation *binding; // @synthesize binding=_binding;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;	// IMP=0x00000000000d21b6
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000d2102
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000d2032
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;	// IMP=0x00000000000d1f45
- (void)configureColumnsWithRootColumn:(void *)arg1;	// IMP=0x00000000000d1d06
- (id)generateSchema;	// IMP=0x00000000000d1b01
- (id)initWithBinding:(id)arg1;	// IMP=0x00000000000d1a82

@end
