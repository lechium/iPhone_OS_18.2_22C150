//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class INImage, NSString;

@interface NSArray (INKeyImageProducing)
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;	// IMP=0x00200000000567c7
@property(readonly) INImage *_keyImage;
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;	// IMP=0x002000000008be5b
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x002000000008b892
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x00200000000be9da
- (id)_intents_cacheableObjects;	// IMP=0x00200000000be78c
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0020000000136ab7
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x002000000021c848
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;	// IMP=0x002000000029ecd7
- (id)_intents_indexingRepresentation;	// IMP=0x00200000002bcdd6
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00200000002bcc6d
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00200000002feda2
- (id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2;	// IMP=0x00200000002feb58
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id *)arg3;	// IMP=0x00200000002fe679

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

