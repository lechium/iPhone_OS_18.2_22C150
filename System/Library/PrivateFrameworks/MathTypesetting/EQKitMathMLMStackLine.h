//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MathTypesetting/EQKitMathMLNode-Protocol.h>

@class EQKitSourceAttribution, NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMStackLine <EQKitMathMLNode>
{
    EQKitSourceAttribution *mSourceAttribution;	// 16 = 0x10
}

@property(retain, nonatomic) EQKitSourceAttribution *sourceAttribution; // @synthesize sourceAttribution=mSourceAttribution;
- (unsigned long long)schemataThickness;	// IMP=0x00000000000523f1
- (struct Schemata)layoutSchemata;	// IMP=0x00000000000523d9
- (const void *)mathMLAttributes;	// IMP=0x0000000000052368
- (void)dealloc;	// IMP=0x0000000000052326
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;	// IMP=0x0000000000052314

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
