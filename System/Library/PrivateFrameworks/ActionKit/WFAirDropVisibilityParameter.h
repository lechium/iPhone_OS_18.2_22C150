//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;
@protocol WFPropertyListObject;

__attribute__((visibility("hidden")))
@interface WFAirDropVisibilityParameter : WFEnumerationParameter
{
}

- (void).cxx_destruct;	// IMP=0x000000000002f625
- (id)initWithDefinition:(id)arg1;	// IMP=0x000000000002f5f1
@property(nonatomic, readonly) id <WFPropertyListObject> defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x000000000002f550
@property(nonatomic, readonly) NSArray *possibleStates;

@end
