//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DirectionIntentItemProvider : NSObject
{
}

- (void)searchFieldItemWithResolveditem:(id)arg1 localSearchCompletionFromServer:(id)arg2 searchResultFromServer:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0040000000dcb373
- (void)_continueWithOrigin:(id)arg1 destination:(id)arg2 transportType:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000dcb198
- (void)directionItemWithDirectionIntent:(id)arg1 localSearchCompletionOrigin:(id)arg2 localSearchCompletionDestination:(id)arg3 searchResultOrigin:(id)arg4 searchResultDestination:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000dcad30
- (void)directionItemWithDirectionIntent:(id)arg1 searchResults:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000dcaab3
- (void)directionItemWithLocalSearchCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000dca9cc

@end

