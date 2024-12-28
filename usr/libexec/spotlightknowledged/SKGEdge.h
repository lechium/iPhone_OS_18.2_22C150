//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/MAEdge.h>

@class NSNumber;

@interface SKGEdge : MAEdge
{
}

+ (id)edgeFromNode:(id)arg1 toNode:(id)arg2;	// IMP=0x0020000000022504
+ (id)edgeWithElementIdentifier:(unsigned long long)arg1 inGraph:(id)arg2;	// IMP=0x0010000000021d94
+ (id)filter;	// IMP=0x0010000000021d0a
+ (id)name;	// IMP=0x0010000000021cfd
+ (Class)nodeClass;	// IMP=0x0010000000021cec
- (float)weight;	// IMP=0x0020000000022d16
- (unsigned short)domain;	// IMP=0x0010000000022d0b
- (id)label;	// IMP=0x0010000000022cf1
@property(readonly, nonatomic) NSNumber *score;
- (id)propertyDictionary;	// IMP=0x0010000000022be8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000022b71
- (_Bool)isEqualToEdge:(id)arg1;	// IMP=0x0010000000022902
- (id)initWithSourceNode:(id)arg1 targetNode:(id)arg2;	// IMP=0x00100000000228d3
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;	// IMP=0x00100000000227d6

@end
