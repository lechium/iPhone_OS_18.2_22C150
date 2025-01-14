//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MathTypesetting/EQKitMathMLNode-Protocol.h>

@class EQKitMathMLNode, EQKitSourceAttribution;

__attribute__((visibility("hidden")))
@interface EQKitMathMLTernaryNode <EQKitMathMLNode>
{
    EQKitMathMLNode *mFirst;	// 16 = 0x10
    EQKitMathMLNode *mSecond;	// 24 = 0x18
    EQKitMathMLNode *mThird;	// 32 = 0x20
    EQKitSourceAttribution *mSourceAttribution;	// 40 = 0x28
}

@property(retain, nonatomic) EQKitSourceAttribution *sourceAttribution; // @synthesize sourceAttribution=mSourceAttribution;
- (_Bool)isBaseFontNameUsed;	// IMP=0x00000000000547bf
- (const void *)mathMLAttributes;	// IMP=0x00000000000547b7
- (id)children;	// IMP=0x000000000005473d
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;	// IMP=0x0000000000054665
- (void)dealloc;	// IMP=0x00000000000545f1
- (id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3;	// IMP=0x000000000005452d
- (id)init;	// IMP=0x0000000000054514

@end

