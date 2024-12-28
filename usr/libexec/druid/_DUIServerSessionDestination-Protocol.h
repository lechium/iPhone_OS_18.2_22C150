//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, _DUIPotentialDrop, _DUITargetLayerDescriptor;

@protocol _DUIServerSessionDestination
- (oneway void)requestVisibleItemsWithReply:(void (^)(NSArray *))arg1;
- (oneway void)enableKeyboardIfNeeded;
- (oneway void)sawDragEndEvent;
- (oneway void)requestDropWithOperation:(unsigned long long)arg1 contextID:(unsigned int)arg2 layerRenderID:(unsigned long long)arg3;
- (oneway void)requestDropWithOperation:(unsigned long long)arg1 layerContext:(_DUITargetLayerDescriptor *)arg2;
- (oneway void)takePotentialDrop:(_DUIPotentialDrop *)arg1;
- (oneway void)dirtyDestinationItems:(NSArray *)arg1;
@end
