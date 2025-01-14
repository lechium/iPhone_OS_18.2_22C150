//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/KGGraphImplementation-Protocol.h>

@class KGElementIdentifierSet, NSArray, NSDictionary;

@protocol KGMutableGraphImplementation <KGGraphImplementation>
- (_Bool)rollbackTransactionWithError:(id *)arg1;
- (_Bool)commitTransactionWithError:(id *)arg1;
- (_Bool)beginTransactionWithError:(id *)arg1;
- (_Bool)updateEdgeForIdentifier:(unsigned long long)arg1 withProperties:(NSDictionary *)arg2 error:(id *)arg3;
- (_Bool)updateNodeForIdentifier:(unsigned long long)arg1 withProperties:(NSDictionary *)arg2 error:(id *)arg3;
- (_Bool)removeEdgesForIdentifiers:(KGElementIdentifierSet *)arg1 error:(id *)arg2;
- (_Bool)removeNodesForIdentifiers:(KGElementIdentifierSet *)arg1 error:(id *)arg2;
- (_Bool)removeEdgeForIdentifier:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)removeNodeForIdentifier:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)addEdges:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)addNodes:(NSArray *)arg1 error:(id *)arg2;
@end

