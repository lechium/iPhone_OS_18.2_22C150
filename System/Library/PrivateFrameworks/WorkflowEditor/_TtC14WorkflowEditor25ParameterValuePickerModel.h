//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14WorkflowEditor25ParameterValuePickerModel : NSObject
{
    MISSING_TYPE *_results;	// 0 = 0x0
    MISSING_TYPE *_prompt;	// 0 = 0x0
    MISSING_TYPE *_selectedState;	// 0 = 0x0
    MISSING_TYPE *_userInput;	// 0 = 0x0
    MISSING_TYPE *parameter;	// 5 = 0x5
    MISSING_TYPE *allowsMultipleSelection;	// 25 = 0x19
    MISSING_TYPE *allowedVariableTypes;	// 1702125407 = 0x65745f5f
    MISSING_TYPE *variableProvider;	// 0 = 0x0
    MISSING_TYPE *variableUIDelegate;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *onSelectedStateChange;	// 0 = 0x0
    MISSING_TYPE *onSelectMagicVariable;	// 13456 = 0x3490
    MISSING_TYPE *onCancel;	// 2034102 = 0x1f09b6
    MISSING_TYPE *defaultCollection;	// 0 = 0x0
    MISSING_TYPE *cachedValues;	// 0 = 0x0
    MISSING_TYPE *reloadDebouncer;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000004d7e2
- (id)init;	// IMP=0x000000000004d7ad
- (void)parameterAttributesDidChange:(id)arg1;	// IMP=0x000000000004d740
- (void)_reload;	// IMP=0x000000000004af28

@end

