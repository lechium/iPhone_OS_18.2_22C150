//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet;
@protocol KGEdge, KGNode;

@protocol KGEntityFactory
- (id <KGEdge>)edgeWithIdentifier:(unsigned long long)arg1 labels:(NSSet *)arg2 properties:(NSDictionary *)arg3 sourceNode:(id <KGNode>)arg4 targetNode:(id <KGNode>)arg5;
- (id <KGNode>)nodeWithIdentifier:(unsigned long long)arg1 labels:(NSSet *)arg2 properties:(NSDictionary *)arg3;
@end

