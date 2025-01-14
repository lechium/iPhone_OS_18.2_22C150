//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolDOMDomainEventDispatcher.h>

@interface RWIProtocolDOMDomainEventDispatcher (IKJSDependency)
- (void)safe_pseudoElementAddedWithParentId:(int)arg1 pseudoElement:(id)arg2;	// IMP=0x00600000000ce786
- (void)safe_attributeModifiedWithNodeId:(int)arg1 name:(id)arg2 value:(id)arg3;	// IMP=0x00600000000ce66c
- (void)safe_inlineStyleInvalidatedWithNodeIds:(id)arg1;	// IMP=0x00600000000ce582
- (void)safe_setChildNodesWithParentId:(int)arg1 nodes:(id)arg2;	// IMP=0x00600000000ce48d
- (void)safe_customElementStateChangedWithNodeId:(int)arg1 customElementState:(long long)arg2;	// IMP=0x00600000000ce3af
- (void)safe_attributeRemovedWithNodeId:(int)arg1 name:(id)arg2;	// IMP=0x00600000000ce2ba
- (void)safe_shadowRootPoppedWithHostId:(int)arg1 rootId:(int)arg2;	// IMP=0x00600000000ce1dd
- (void)safe_childNodeCountUpdatedWithNodeId:(int)arg1 childNodeCount:(int)arg2;	// IMP=0x00600000000ce100
- (void)safe_willRemoveEventListenerWithNodeId:(int)arg1;	// IMP=0x00600000000ce02d
- (void)safe_shadowRootPushedWithHostId:(int)arg1 root:(id)arg2;	// IMP=0x00600000000cdf38
- (void)safe_willDestroyDOMNodeWithNodeId:(int)arg1;	// IMP=0x00600000000cde65
- (void)safe_inspectWithNodeId:(int)arg1;	// IMP=0x00600000000cdd92
- (void)safe_powerEfficientPlaybackStateChangedWithNodeId:(int)arg1 timestamp:(double)arg2 isPowerEfficient:(_Bool)arg3;	// IMP=0x00600000000cdca9
- (void)safe_documentUpdated;	// IMP=0x00600000000cdc08
- (void)safe_pseudoElementRemovedWithParentId:(int)arg1 pseudoElementId:(int)arg2;	// IMP=0x00600000000cdb2b
- (void)safe_characterDataModifiedWithNodeId:(int)arg1 characterData:(id)arg2;	// IMP=0x00600000000cda36
- (void)safe_didAddEventListenerWithNodeId:(int)arg1;	// IMP=0x00600000000cd963
- (void)safe_didFireEventWithNodeId:(int)arg1 eventName:(id)arg2 timestamp:(double)arg3 data:(id *)arg4;	// IMP=0x00600000000cd84a
- (void)safe_childNodeRemovedWithParentNodeId:(int)arg1 nodeId:(int)arg2;	// IMP=0x00600000000cd76d
- (void)safe_childNodeInsertedWithParentNodeId:(int)arg1 previousNodeId:(int)arg2 node:(id)arg3;	// IMP=0x00600000000cd66c
@end

