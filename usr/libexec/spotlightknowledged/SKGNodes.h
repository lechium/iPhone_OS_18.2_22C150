//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/MANodeCollection.h>

@interface SKGNodes : MANodeCollection
{
    unsigned long long _nodeIdentifier;	// 8 = 0x8
}

+ (id)nodesWithIdentifier:(unsigned long long)arg1 inGraph:(id)arg2;	// IMP=0x002000000001cc62
+ (id)nodesWithNode:(id)arg1 inGraph:(id)arg2;	// IMP=0x001000000001c5c4
+ (id)subsetInCollection:(id)arg1;	// IMP=0x001000000001c4e6
+ (id)nodesInGraph:(id)arg1;	// IMP=0x001000000001c408
+ (id)filter;	// IMP=0x001000000001c3dd
+ (id)labels;	// IMP=0x001000000001c25a
+ (Class)edgeClass;	// IMP=0x001000000001c249
+ (Class)nodeClass;	// IMP=0x001000000001c238
@property(nonatomic) unsigned long long nodeIdentifier; // @synthesize nodeIdentifier=_nodeIdentifier;
- (id)domains;	// IMP=0x001000000001d914
- (id)personasWithPersona:(id)arg1 inGraph:(id)arg2;	// IMP=0x001000000001d77d
- (id)personas;	// IMP=0x001000000001d6f2
- (id)references;	// IMP=0x001000000001d667
- (id)phones;	// IMP=0x001000000001d5dc
- (id)emails;	// IMP=0x001000000001d551
- (id)nameKeys;	// IMP=0x001000000001d4c6
- (id)names;	// IMP=0x001000000001d43b
- (id)displayNames;	// IMP=0x001000000001d3b0
- (id)entities;	// IMP=0x001000000001d325
- (id)photos;	// IMP=0x001000000001d29a
- (id)contacts;	// IMP=0x001000000001d20f
- (id)persons;	// IMP=0x001000000001d184
- (id)users;	// IMP=0x001000000001d0f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001d082
- (_Bool)isEqualToNodes:(id)arg1;	// IMP=0x001000000001cf77
- (id)initWithNode:(id)arg1 inGraph:(id)arg2;	// IMP=0x001000000001cde9
- (void)enumerateNodesInGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001caef

@end

