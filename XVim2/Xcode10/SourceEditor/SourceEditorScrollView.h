//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSScroller;
@protocol SourceEditorScrollViewScrollerMoved;

@interface SourceEditorScrollView : NSScrollView
{
    BOOL _floatingSubviewsShouldMaskToBounds;
    BOOL _updatingAutoContentInsets;
    id <SourceEditorScrollViewScrollerMoved> _scrollerMovedDelegate;
    NSScroller *_observedVerticalScroller;
    struct NSEdgeInsets _additionalContentInsets;
}

@property __weak NSScroller *observedVerticalScroller; // @synthesize observedVerticalScroller=_observedVerticalScroller;
@property BOOL updatingAutoContentInsets; // @synthesize updatingAutoContentInsets=_updatingAutoContentInsets;
@property struct NSEdgeInsets additionalContentInsets; // @synthesize additionalContentInsets=_additionalContentInsets;
@property __weak id <SourceEditorScrollViewScrollerMoved> scrollerMovedDelegate; // @synthesize scrollerMovedDelegate=_scrollerMovedDelegate;
//- (void).cxx_destruct;
- (BOOL)dvt_autoforwardsScrollWheelEvents;
- (void)dvt_setAutoforwardsScrollWheelEvents:(BOOL)arg1;
- (void)setFloatingSubviewsShouldMaskToBounds:(BOOL)arg1;
- (id)floatingSubviewsForAxis:(long long)arg1;
- (void)addFloatingSubview:(id)arg1 forAxis:(long long)arg2 positioned:(long long)arg3 relativeTo:(id)arg4;
- (id)_floatingSubviewsContainerForAxis:(long long)arg1;
- (id)floatingSubviewsContainerForAxis:(long long)arg1;
- (void)_notifyDelegateOfUserScroll:(id)arg1;
- (void)_doScroller:(id)arg1 hitPart:(long long)arg2 multiplier:(double)arg3;
- (void)_updateAutomaticContentInsets;
- (void)updateAutomaticContentInsets;

@end

