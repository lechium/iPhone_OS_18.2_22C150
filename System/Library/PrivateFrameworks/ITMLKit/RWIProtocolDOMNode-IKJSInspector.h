//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolDOMNode.h>

@interface RWIProtocolDOMNode (IKJSInspector)
+ (id)ik_nodeFromDOMNode:(id)arg1;	// IMP=0x00500000000168b8
+ (id)ik_nodeFromDOMNode:(id)arg1 depth:(int)arg2;	// IMP=0x00500000000166ad
+ (id)safe_initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5;	// IMP=0x00500000000cd1c9
- (void)ik_updateWithDOMNode:(id)arg1 fullfillChildren:(_Bool)arg2 dispatcher:(id)arg3;	// IMP=0x00100000000176df
- (void)ik_updateWithDOMNode:(id)arg1 dispatcher:(id)arg2;	// IMP=0x00100000000176c8
- (id)ik_nodeWithNodeId:(int)arg1;	// IMP=0x0010000000017534
- (id)ik_description;	// IMP=0x0010000000017465
- (void)ik_insertChild:(id)arg1 before:(id)arg2;	// IMP=0x00100000000172ed
- (void)ik_removeChildWithId:(int)arg1;	// IMP=0x00100000000171d6
- (void)ik_removeAttributeNamed:(id)arg1;	// IMP=0x00100000000170b3
- (void)ik_setAttributeValue:(id)arg1 name:(id)arg2;	// IMP=0x0010000000016e54
- (id)ik_attributesDictionary;	// IMP=0x0010000000016cef
@end
