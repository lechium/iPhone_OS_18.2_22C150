//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MathTypesetting/EQKitMathMLNode-Protocol.h>

@class EQKitSourceAttribution;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMAlignGroup <EQKitMathMLNode>
{
    EQKitSourceAttribution *mSourceAttribution;	// 16 = 0x10
}

@property(retain, nonatomic) EQKitSourceAttribution *sourceAttribution; // @synthesize sourceAttribution=mSourceAttribution;
- (struct Schemata)layoutSchemata;	// IMP=0x000000000004efea
- (const void *)mathMLAttributes;	// IMP=0x000000000004ef79
- (void)dealloc;	// IMP=0x000000000004ef37
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;	// IMP=0x000000000004ef08

@end

