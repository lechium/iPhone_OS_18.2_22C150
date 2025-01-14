//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_nw_interface, OS_nw_path_flow, OS_nw_path_flow_registration;

__attribute__((visibility("hidden")))
@interface nw_interpose_flow : NSObject
{
    NSObject<OS_nw_interface> *_interface;	// 8 = 0x8
    NSObject<OS_nw_path_flow_registration> *_registration;	// 16 = 0x10
    NSObject<OS_nw_path_flow> *_flow;	// 24 = 0x18
    CDUnknownBlockType _eventHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c24120
- (_Bool)matchNexusInstance:(id)arg1;	// IMP=0x0000000000c240d0
- (_Bool)matchNexusAgentWithFlow:(id)arg1;	// IMP=0x0000000000c24030
- (_Bool)matchNexusAgent:(unsigned char [16])arg1;	// IMP=0x0000000000c23f40
- (void)resetFlow:(id)arg1;	// IMP=0x0000000000c23df0
- (void)clearFlowEventHandler;	// IMP=0x0000000000c23d10
- (void)closeFlow;	// IMP=0x0000000000c23c20
- (void)notifyFlowEvent:(int)arg1;	// IMP=0x0000000000c23bf0
- (void)close;	// IMP=0x0000000000c23b00
- (void)dealloc;	// IMP=0x0000000000c239d0
- (id)initWithInterface:(id)arg1 registration:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c23620

@end

