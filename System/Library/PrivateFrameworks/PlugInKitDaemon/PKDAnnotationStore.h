//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol PKDExternalProviders;

@interface PKDAnnotationStore : NSObject
{
    NSURL *_annotationsURL;	// 8 = 0x8
    NSMutableDictionary *_annotations;	// 16 = 0x10
    id <PKDExternalProviders> _external;	// 24 = 0x18
}

+ (id)globalURL;	// IMP=0x0060000000002060
+ (id)confstrURL:(int)arg1;	// IMP=0x0060000000001f50
- (void).cxx_destruct;	// IMP=0x0000000000002100
@property(readonly, nonatomic) id <PKDExternalProviders> external; // @synthesize external=_external;
@property(retain, nonatomic) NSMutableDictionary *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) NSURL *annotationsURL; // @synthesize annotationsURL=_annotationsURL;
- (id)defaultDatabaseURL;	// IMP=0x0000000000001d00
- (_Bool)saveDb:(id *)arg1;	// IMP=0x0000000000001b60
- (_Bool)loadDb:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001970
- (void)setAnnotation:(id)arg1 forPlugIn:(id)arg2;	// IMP=0x00000000000015b0
- (id)annotationForPlugIn:(id)arg1;	// IMP=0x0000000000001500
- (id)annotationForIdentifier:(id)arg1;	// IMP=0x0000000000001480
- (id)initWithDatabase:(id)arg1 externalProviders:(id)arg2;	// IMP=0x0000000000001200

@end

