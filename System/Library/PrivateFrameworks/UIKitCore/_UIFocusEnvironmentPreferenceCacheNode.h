//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;
@protocol UIFocusEnvironment;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentPreferenceCacheNode : NSObject
{
    NSHashTable *_parentNodes;	// 8 = 0x8
    struct {
        unsigned int resolved:1;
        unsigned int resolvedExplicitly:1;
    } _flags;	// 16 = 0x10
    id <UIFocusEnvironment> _environment;	// 24 = 0x18
    id <UIFocusEnvironment> _resolvedEnvironment;	// 32 = 0x20
    NSArray *_childNodes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000985d06
@property(copy, nonatomic) NSArray *childNodes; // @synthesize childNodes=_childNodes;
@property(readonly, nonatomic) id <UIFocusEnvironment> resolvedEnvironment; // @synthesize resolvedEnvironment=_resolvedEnvironment;
@property(readonly, nonatomic) id <UIFocusEnvironment> environment; // @synthesize environment=_environment;
- (id)debugDescription;	// IMP=0x0000000000985b95
- (id)description;	// IMP=0x0000000000985a2b
@property(readonly, nonatomic, getter=isResolved) _Bool resolved;
- (void)_unresolve;	// IMP=0x0000000000985647
- (void)resolve:(id)arg1;	// IMP=0x0000000000985630
- (void)_resolve:(id)arg1 explicitly:(_Bool)arg2;	// IMP=0x0000000000985499
- (void)_reevaluateResolution;	// IMP=0x0000000000985204
- (id)initWithEnvironment:(id)arg1;	// IMP=0x000000000098516a

@end
